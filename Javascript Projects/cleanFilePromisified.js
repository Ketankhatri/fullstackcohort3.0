import fs from 'fs';


function readFileAsync(){


return new Promise((resolve,reject)=> {
  fs.readFile('a.txt', 'utf8', (err, data) => {
    if(err) reject(err);
      else resolve(data);
  })
}
)

//   const data = fs.readFile('a.txt', 'utf8', (err, data) => {
//   if (err) {
//     console.error('Error reading file:', err);
//     return;
//   }
//   console.log('File content:', data);
// });
}

readFileAsync().then(data => {
  console.log(`This is promisified ${data}`)
})
.catch(err => {console.error(err)});

